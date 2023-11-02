
@interface OZFxPlugParameterHandler : NSObject <FxMixingAPI, FxOptionalParameterCreationAPI, FxOptionalParameterRetrievalAPI, FxOptionalParameterSettingAPI, FxParameterAPIPrivate, FxParameterCreationAPI, FxParameterCreationAPI_v2, FxParameterCreationAPI_v3, FxParameterRetrievalAPI, FxParameterRetrievalAPIPrivate, FxParameterRetrievalAPI_v2, FxParameterRetrievalAPI_v3, FxParameterSettingAPI, FxParameterSettingAPIPrivate, FxParameterSettingAPI_v2, FxParameterSettingAPI_v3, FxPlugAPIDelegate, FxRenderNotificationAPI, FxUndoAPI, OZFxPlugInternalParamAPI, PROAPIObject> {
    bool  _appTerminating;
    void * _baseChannel;
    void * _channelMap;
    bool  _colorCorrection;
    void * _context;
    struct vector<OZChannelBlindData *, std::allocator<OZChannelBlindData *>> { 
        struct OZChannelBlindData {} **__begin_; 
        struct OZChannelBlindData {} **__end_; 
        struct __compressed_pair<OZChannelBlindData **, std::allocator<OZChannelBlindData *>> { 
            struct OZChannelBlindData {} **__value_; 
        } __end_cap_; 
    }  _customParameterList;
    bool  _filmSpace;
    void * _flagMap;
    void * _folderStack;
    struct vector<unsigned int, std::allocator<unsigned int>> { 
        unsigned int *__begin_; 
        unsigned int *__end_; 
        struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
            unsigned int *__value_; 
        } __end_cap_; 
    }  _fullWidthCustomParams;
    struct shared_ptr<OZFxPlugSharedLock> { 
        struct OZFxPlugSharedLock {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _fxPlugLock;
    bool  _hasPathParameters;
    bool  _hasPointParam;
    bool  _isNewGradientColorize;
    int  _numWriteActions;
    struct map<unsigned int, ParameterTransactionHelpers, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, ParameterTransactionHelpers>>> { 
        struct __tree<std::__value_type<unsigned int, ParameterTransactionHelpers>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, ParameterTransactionHelpers>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, ParameterTransactionHelpers>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, ParameterTransactionHelpers>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, ParameterTransactionHelpers>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _paramCreationMap;
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _pluginRemoved;
    bool  _postAddParameters;
    struct GLRenderer { } * _renderer;
    bool  _sendingNotifications;
    bool  _showedParameterSettingWarning;
    bool  _startActionCalled;
    struct stack<bool, std::deque<bool>> { 
        struct deque<bool, std::allocator<bool>> { 
            struct __split_buffer<bool *, std::allocator<bool *>> { 
                bool **__first_; 
                bool **__begin_; 
                bool **__end_; 
                struct __compressed_pair<bool **, std::allocator<bool *>> { 
                    bool **__value_; 
                } __end_cap_; 
            } __map_; 
            unsigned long long __start_; 
            struct __compressed_pair<unsigned long, std::allocator<bool>> { 
                unsigned long long __value_; 
            } __size_; 
        } c; 
    }  _suppressChannelChangesStack;
    struct OZFxPlugRenderContextManager { 
        int (**_vptr$OZFxPlugRenderContextManager)(); 
        struct FxColorDescription { 
            struct PCColorDescription { 
                struct PCCFRef<CGColorSpace *> { 
                    struct CGColorSpace {} *_obj; 
                } _colorSpaceRef; 
                int _dynamicRange; 
                struct PCToneMapMethod { 
                    int _type; 
                    float _gain; 
                } _toneMapMethod; 
            } _pcColorDesc; 
            bool _isPremultiplied; 
        } _workingColorDescription; 
        float _blendingGamma; 
        struct map<_opaque_pthread_t *, std::stack<OZFxPlugRenderContext *>, std::less<_opaque_pthread_t *>, std::allocator<std::pair<_opaque_pthread_t *const, std::stack<OZFxPlugRenderContext *>>>> { 
            struct __tree<std::__value_type<_opaque_pthread_t *, std::stack<OZFxPlugRenderContext *>>, std::__map_value_compare<_opaque_pthread_t *, std::__value_type<_opaque_pthread_t *, std::stack<OZFxPlugRenderContext *>>, std::less<_opaque_pthread_t *>>, std::allocator<std::__value_type<_opaque_pthread_t *, std::stack<OZFxPlugRenderContext *>>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<_opaque_pthread_t *, std::stack<OZFxPlugRenderContext *>>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<_opaque_pthread_t *, std::__value_type<_opaque_pthread_t *, std::stack<OZFxPlugRenderContext *>>, std::less<_opaque_pthread_t *>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _contexts; 
        struct PCSpinLock { 
            struct os_unfair_lock_s { 
                unsigned int _os_unfair_lock_opaque; 
            } _lock; 
        } _contextLock; 
    }  _threadContextManager;
    OZViewControllerGroup * _viewControllerGroup;
}

@property (getter=isColorCorrection) bool colorCorrection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_floatParameter:(int)arg1 hasValidMin:(double)arg2 max:(double)arg3 sliderMin:(double)arg4 sliderMax:(double)arg5 defaultValue:(double)arg6 paramFlags:(unsigned int)arg7;
- (bool)_getAngle:(double*)arg1 fromParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_getBoolValue:(bool*)arg1 fromParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_getCustomParameterValue:(id*)arg1 fromParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_getFloatValue:(double*)arg1 fromParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_getGradientSamples:(void*)arg1 numSamples:(unsigned long long)arg2 depth:(unsigned long long)arg3 fromParm:(unsigned int)arg4 atTime:(union { double x1; struct { /* ? */ } *x2; })arg5;
- (bool)_getHistogramBlackIn:(double*)arg1 BlackOut:(double*)arg2 WhiteIn:(double*)arg3 WhiteOut:(double*)arg4 Gamma:(double*)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atTime:(union { double x1; struct { /* ? */ } *x2; })arg8;
- (bool)_getIntValue:(int*)arg1 fromParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_getPathID:(void**)arg1 fromParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 alphaValue:(double*)arg4 fromParm:(unsigned int)arg5 atTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (bool)_getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 fromParm:(unsigned int)arg4 atTime:(union { double x1; struct { /* ? */ } *x2; })arg5;
- (bool)_getXValue:(double*)arg1 YValue:(double*)arg2 fromParm:(unsigned int)arg3 atTime:(union { double x1; struct { /* ? */ } *x2; })arg4;
- (bool)_intParameter:(int)arg1 hasValidMin:(int)arg2 max:(int)arg3 sliderMin:(int)arg4 sliderMax:(int)arg5 defaultValue:(int)arg6 paramFlags:(unsigned int)arg7;
- (bool)_setBoolValue:(bool)arg1 toParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_setFloatValue:(double)arg1 toParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_setHistogramBlackIn:(double)arg1 BlackOut:(double)arg2 WhiteIn:(double)arg3 WhiteOut:(double)arg4 Gamma:(double)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atTime:(union { double x1; struct { /* ? */ } *x2; })arg8;
- (bool)_setIntValue:(int)arg1 toParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_setPathID:(void*)arg1 toParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)_setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 alphaValue:(double)arg4 toParm:(unsigned int)arg5 atTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (bool)_setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 toParm:(unsigned int)arg4 atTime:(union { double x1; struct { /* ? */ } *x2; })arg5;
- (bool)_setXValue:(double)arg1 YValue:(double)arg2 toParm:(unsigned int)arg3 atTime:(union { double x1; struct { /* ? */ } *x2; })arg4;
- (bool)_setupRenderer;
- (void)_updateUI:(id)arg1;
- (void)_updateUIForParm:(int)arg1;
- (void)abortAndWait;
- (struct OZChannelBool { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; }*)absolutePointsChannel;
- (void)actionEnded;
- (void)actionStarted;
- (bool)add2DScaleWithName:(id)arg1 parmId:(unsigned int)arg2 defaultX:(double)arg3 defaultY:(double)arg4 parmFlags:(unsigned int)arg5;
- (bool)add2DVectorWithName:(id)arg1 parmId:(unsigned int)arg2 defaultX:(double)arg3 defaultY:(double)arg4 parmFlags:(unsigned int)arg5;
- (void)addAbsolutePointCheckbox:(unsigned int)arg1;
- (bool)addAngleSliderWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 parmFlags:(unsigned int)arg6;
- (bool)addColorParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultRed:(double)arg3 defaultGreen:(double)arg4 defaultBlue:(double)arg5 defaultAlpha:(double)arg6 parmFlags:(unsigned int)arg7;
- (bool)addColorParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultRed:(double)arg3 defaultGreen:(double)arg4 defaultBlue:(double)arg5 parmFlags:(unsigned int)arg6;
- (bool)addCustomParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(id)arg3 parmFlags:(unsigned int)arg4;
- (void)addExistingChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1;
- (void)addExistingGroup:(void*)arg1;
- (bool)addFlags:(unsigned int)arg1 toParm:(unsigned int)arg2;
- (void)addFlipCheckbox:(unsigned int)arg1;
- (void)addFlipCheckbox:(unsigned int)arg1 withChannel:(struct OZChannelBool { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; }*)arg2;
- (bool)addFloatSliderWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 sliderMin:(double)arg6 sliderMax:(double)arg7 delta:(double)arg8 parmFlags:(unsigned int)arg9;
- (bool)addGradientPositionedWithName:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (bool)addGradientWithName:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (bool)addHistogramWithName:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (bool)addImageReferenceWithName:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (void)addInputPointsCheckbox:(unsigned int)arg1;
- (void)addInputPointsCheckbox:(unsigned int)arg1 withChannel:(struct OZChannelBool { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; }*)arg2;
- (bool)addIntSliderWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(int)arg3 parameterMin:(int)arg4 parameterMax:(int)arg5 sliderMin:(int)arg6 sliderMax:(int)arg7 delta:(int)arg8 parmFlags:(unsigned int)arg9;
- (bool)addLevelsWithName:(id)arg1 parmId:(unsigned int)arg2 hideGamma:(bool)arg3 parmFlags:(unsigned int)arg4;
- (void)addMixSlider:(unsigned int)arg1;
- (void)addMixSlider:(unsigned int)arg1 withChannel:(struct OZChannelPercent { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; }*)arg2;
- (void)addParamMappingForParameterChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1;
- (bool)addPathPickerWithName:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (bool)addPercentSliderWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(double)arg3 parameterMin:(double)arg4 parameterMax:(double)arg5 sliderMin:(double)arg6 sliderMax:(double)arg7 delta:(double)arg8 parmFlags:(unsigned int)arg9;
- (bool)addPointParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultX:(double)arg3 defaultY:(double)arg4 parmFlags:(unsigned int)arg5;
- (bool)addPopupMenuWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(unsigned int)arg3 menuEntries:(id)arg4 parmFlags:(unsigned int)arg5;
- (bool)addPopupMenuWithNameAndTags:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(unsigned int)arg3 menuEntries:(id)arg4 tags:(const int*)arg5 tagCount:(int)arg6 parmFlags:(unsigned int)arg7;
- (void)addPublishOSCCheckbox:(unsigned int)arg1;
- (bool)addStringParameterWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(id)arg3 parmFlags:(unsigned int)arg4;
- (bool)addToggleButtonWithName:(id)arg1 parmId:(unsigned int)arg2 defaultValue:(bool)arg3 parmFlags:(unsigned int)arg4;
- (void)appWillTerminate:(id)arg1;
- (void*)baseChannel;
- (void)beginOperationWithChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1;
- (void*)beginTimingOperation:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg2;
- (void)callParameterChanged:(id)arg1 forParameterID:(unsigned int)arg2 modifiedParameterIDs:(void*)arg3 changedParameters:(id)arg4 sharedBase:(void*)arg5 supportsParametersChanged:(bool)arg6;
- (struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)channelForParameterID:(unsigned int)arg1;
- (void*)channelMap;
- (struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)channelWithID:(int)arg1;
- (void)clearImageList;
- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (bool)containsParameterWithID:(unsigned int)arg1;
- (void*)contextManager;
- (double)convertFromFigTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })convertToFigTime:(double)arg1;
- (void)copyFolderRecursiveFrom:(void*)arg1 To:(void*)arg2;
- (void)copyFolderRecursiveFrom:(void*)arg1 To:(void*)arg2 Skip:(int)arg3;
- (void)copyValueGettersFrom:(id)arg1;
- (void*)customParameterList;
- (void)dealloc;
- (id)decodeLegacyData:(id)arg1 forParameterID:(unsigned int)arg2;
- (id)displayName;
- (bool)doneAddingParams;
- (void)dumpAllChannels;
- (void)dumpChannelFolder:(void*)arg1 depth:(int)arg2;
- (void)endOperationWithChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1;
- (bool)endParameterSubGroup;
- (void)endTimingOperation:(void*)arg1;
- (bool)endUndoGroup;
- (union { double x1; struct { /* ? */ } *x2; })figDurationToFxDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 withConversionData:(void*)arg2;
- (union { double x1; struct { /* ? */ } *x2; })figTimeToFxTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 withConversionData:(void*)arg2;
- (bool)finalizeImage:(id)arg1 withSceneNode:(void*)arg2 pixelBounds:(struct PCRect<int> { int x1; int x2; int x3; int x4; })arg3 agent:(void*)arg4 andRenderParams:(const void*)arg5 atTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (struct OZChannelBool { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; }*)flipChannel;
- (bool)folderWasModified:(void*)arg1 inDocument:(void*)arg2 parameterID:(unsigned int)arg3 modifiedParamID:(void*)arg4 supportsParametersChanged:(bool)arg5 paramsChangedArray:(id)arg6 target:(id)arg7;
- (void)forceRenderAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (unsigned int)fxParameterFlagsForChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fxTimeToFigTime:(union { double x1; struct { /* ? */ } *x2; })arg1 withConversionData:(void*)arg2;
- (id)getAllParameterValuesAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 transactionID:(unsigned long long)arg2 pluginSessionID:(unsigned long long)arg3;
- (bool)getBitmap:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4 fromParm:(unsigned int)arg5 atTime:(double)arg6;
- (bool)getBoolValue:(bool*)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (struct PCRect<double> { double x1; double x2; double x3; double x4; })getBoundsFromSceneNode:(void*)arg1 withRenderParams:(void*)arg2;
- (void)getColorInFxPlugColorSpace:(void*)arg1 red:(float*)arg2 green:(float*)arg3 blue:(float*)arg4 alpha:(float*)arg5;
- (bool)getCustomParameterValue:(id*)arg1 fromParm:(unsigned int)arg2;
- (bool)getCustomParameterValue:(id*)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (void)getFieldMode:(int*)arg1 fromFootage:(void*)arg2;
- (bool)getFloatValue:(double*)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (bool)getGradientSamples:(void*)arg1 numSamples:(unsigned long long)arg2 depth:(unsigned long long)arg3 fromParm:(unsigned int)arg4 atTime:(double)arg5;
- (bool)getGradientStartEnd:(double*)arg1 startY:(double*)arg2 endX:(double*)arg3 endY:(double*)arg4 type:(int*)arg5 fromParm:(unsigned int)arg6 atTime:(union { double x1; struct { /* ? */ } *x2; })arg7;
- (bool)getHeliumImage:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4 fromParm:(unsigned int)arg5 atTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (bool)getHistogramBlackIn:(double*)arg1 BlackOut:(double*)arg2 WhiteIn:(double*)arg3 WhiteOut:(double*)arg4 Gamma:(double*)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atTime:(double)arg8;
- (bool)getIntValue:(int*)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (void)getLayerOffsetX:(double*)arg1 andOffsetY:(double*)arg2 fromSceneNode:(void*)arg3 withRenderParams:(const void*)arg4;
- (bool)getLevelsBlack:(double*)arg1 White:(double*)arg2 Gamma:(double*)arg3 fromParm:(unsigned int)arg4 atTime:(union { double x1; struct { /* ? */ } *x2; })arg5;
- (bool)getParameterFlags:(unsigned int*)arg1 fromParm:(unsigned int)arg2;
- (bool)getPathID:(void**)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (double)getPixelAspectRatioFromSceneNode:(void*)arg1;
- (struct CGColorSpace { }*)getPluginColorSpace;
- (void)getPointChannel:(struct OZChannel {}**)arg1 nearestPoint:(struct PCVector2<double> { double x1; double x2; })arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (bool)getRedValue:(double*)arg1 GreenValue:(double*)arg2 BlueValue:(double*)arg3 AlphaValue:(double*)arg4 fromParm:(unsigned int)arg5 atTime:(double)arg6;
- (bool)getRedValue:(double*)arg1 GreenValue:(double*)arg2 BlueValue:(double*)arg3 fromParm:(unsigned int)arg4 atTime:(double)arg5;
- (bool)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 alphaValue:(double*)arg4 fromParm:(unsigned int)arg5 atTime:(double)arg6;
- (bool)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 fromParm:(unsigned int)arg4 atTime:(double)arg5;
- (void*)getScene;
- (void*)getSceneNode;
- (struct PCToneMapMethod { int x1; float x2; })getSceneToneMapMethod;
- (bool)getStringParameterValue:(id*)arg1 fromParm:(unsigned int)arg2;
- (struct OZRenderState { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; double x2; double x3; double x4; unsigned int x5; struct OZTransformNode {} *x6; bool x7; struct PCMatrix44Tmpl<double> { double x_8_1_1[4][4]; } x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; struct OZRenderNode {} *x15; int x16; bool x17; struct OZElement {} *x18; bool x19; bool x20; bool x21; bool x22; bool x23; bool x24; bool x25; bool x26; bool x27; bool x28; bool x29; int x30; struct TransformSet { unsigned long long x_31_1_1; } x31; void *x32; })getTempContextRenderState;
- (bool)getTexture:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4 fromParm:(unsigned int)arg5 atTime:(double)arg6;
- (bool)getXValue:(double*)arg1 YValue:(double*)arg2 fromParm:(unsigned int)arg3 atTime:(double)arg4;
- (bool)hasPathParameters;
- (bool)hasPointParameters;
- (bool)hasValidParameterID:(int)arg1 checkMix:(bool)arg2 checkSpecialCheckboxIDs:(bool)arg3;
- (struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x1; unsigned int *x2; struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { unsigned int *x_3_1_1; } x3; })imageParamIDs;
- (bool)imageSize:(struct CGSize { double x1; double x2; }*)arg1 fromParameter:(unsigned int)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)initWithBaseChannel:(void*)arg1 andCopy:(id)arg2 Skip:(int)arg3 andPluginLock:(struct shared_ptr<OZFxPlugSharedLock> { struct OZFxPlugSharedLock {} *x1; struct __shared_weak_count {} *x2; })arg4;
- (id)initWithBaseChannel:(void*)arg1 andCopy:(id)arg2 andPluginLock:(struct shared_ptr<OZFxPlugSharedLock> { struct OZFxPlugSharedLock {} *x1; struct __shared_weak_count {} *x2; })arg3;
- (id)initWithBaseChannel:(void*)arg1 andPluginLock:(struct shared_ptr<OZFxPlugSharedLock> { struct OZFxPlugSharedLock {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (struct OZChannelBool { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; }*)inputPointsChannel;
- (bool)isColorCorrection;
- (bool)isImageWellMediaFlexoMediaForSceneNode:(void*)arg1;
- (bool)isPerformingBulkChange;
- (bool)isRendering;
- (struct PCPtr<LiImageSource> { struct LiImageSource {} *x1; struct PCSharedCount { struct PC_Sp_counted_base {} *x_2_1_1; } x2; })makeSourceFromSceneNode:(void*)arg1 withRenderParams:(void*)arg2;
- (void)markForDynamicParameterUsage;
- (double)mixAmountAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (struct OZChannelPercent { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; }*)mixChannel;
- (id)motionEffectForLockedSharedBase:(void*)arg1;
- (void)movePublishOSCChannelToEnd;
- (int)numWriteActions;
- (void)onVTBUserInteractionEventNotification:(id)arg1;
- (unsigned int)paramIDForImageWellWithSceneNode:(unsigned int)arg1;
- (bool)parameter:(int)arg1 hasValidFlags:(unsigned int)arg2;
- (struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)parameterAtIndex:(unsigned int)arg1;
- (unsigned int)parameterCount;
- (void)postChannelChange:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1 flagsOnly:(bool)arg2;
- (void)postGetParameter:(void*)arg1;
- (void)preChannelChange:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1 flagsOnly:(bool)arg2;
- (void*)preGetCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 forChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (struct OZChannelBool { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; }*)publishOSCChannel;
- (void)reAddHiddenParameters;
- (bool)removeFlags:(unsigned int)arg1 fromParm:(unsigned int)arg2;
- (void)removeHiddenParameters;
- (void)removeParameter:(unsigned int)arg1;
- (struct GLRenderer { }*)renderer;
- (void)restoreParameterFlagsForChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg1;
- (bool)retrieveImage:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4 fromParm:(unsigned int)arg5 atTime:(union { double x1; struct { /* ? */ } *x2; })arg6 retriever:(SEL)arg7 ARGB:(bool)arg8 imageType:(unsigned long long)arg9;
- (bool)safeToSetParameters;
- (void)saveParameterFlags;
- (void)sendNotifications:(id)arg1;
- (void)sendUpdateEvent;
- (void)setAgent:(void*)arg1 toScaleTo:(const void*)arg2;
- (bool)setBoolValue:(bool)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;
- (void)setColorCorrection:(bool)arg1;
- (void)setColorFromFxPlugColorSpace:(void*)arg1 red:(float)arg2 green:(float)arg3 blue:(float)arg4 alpha:(float)arg5;
- (bool)setCustomParameterDefaultValue:(id)arg1 parmId:(unsigned int)arg2;
- (bool)setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2;
- (bool)setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;
- (void)setDoneAddingParams:(bool)arg1;
- (bool)setFloatValue:(double)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;
- (bool)setGradientFlags:(bool)arg1 toParam:(unsigned int)arg2;
- (bool)setGradientHiddenWithOSC:(bool)arg1 toParam:(unsigned int)arg2;
- (bool)setGradientStartEnd:(double)arg1 startY:(double)arg2 endX:(double)arg3 endY:(double)arg4 toParm:(unsigned int)arg5 atTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (void)setHandlingOSCEvents:(bool)arg1;
- (bool)setHistogramBlackIn:(double)arg1 BlackOut:(double)arg2 WhiteIn:(double)arg3 WhiteOut:(double)arg4 Gamma:(double)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atTime:(double)arg8;
- (bool)setIntValue:(int)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;
- (void)setIsNewGradientColorize:(bool)arg1;
- (void)setIsRendering:(bool)arg1;
- (bool)setLevelsBlack:(double)arg1 White:(double)arg2 Gamma:(double)arg3 forParm:(unsigned int)arg4 atTime:(union { double x1; struct { /* ? */ } *x2; })arg5;
- (void)setObjectID;
- (void)setParameterFlags:(unsigned int)arg1 forChannel:(struct OZChannelBase { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; }*)arg2;
- (bool)setParameterFlags:(unsigned int)arg1 toParm:(unsigned int)arg2;
- (bool)setPathID:(void*)arg1 toParm:(unsigned int)arg2 atTime:(double)arg3;
- (void)setPluginRemoved:(bool)arg1;
- (bool)setRedValue:(double)arg1 GreenValue:(double)arg2 BlueValue:(double)arg3 AlphaValue:(double)arg4 toParm:(unsigned int)arg5 atTime:(double)arg6;
- (bool)setRedValue:(double)arg1 GreenValue:(double)arg2 BlueValue:(double)arg3 toParm:(unsigned int)arg4 atTime:(double)arg5;
- (bool)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 alphaValue:(double)arg4 toParm:(unsigned int)arg5 atTime:(double)arg6;
- (bool)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 toParm:(unsigned int)arg4 atTime:(double)arg5;
- (void)setRenderParams:(const void*)arg1 withLithiumInput:(void*)arg2 withLithiumAgent:(void*)arg3;
- (bool)setStringParameterValue:(id)arg1 toParm:(unsigned int)arg2;
- (void)setViewControllerGroup:(id)arg1;
- (bool)setXValue:(double)arg1 YValue:(double)arg2 toParm:(unsigned int)arg3 atTime:(double)arg4;
- (void)setupImageParamIDs:(void*)arg1;
- (bool)shouldFlipPoints;
- (void)softDisableAllChannels;
- (bool)startParameterSubGroup:(id)arg1 parmId:(unsigned int)arg2 parmFlags:(unsigned int)arg3;
- (bool)startUndoGroup:(id)arg1;
- (void)stopObservingViewControllerGroup;
- (bool)suppressUpdates;
- (id)transactionForParameterID:(unsigned int)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 transactionID:(unsigned long long)arg3 pluginSessionID:(unsigned long long)arg4;
- (void)updateChannelMap;
- (void)updateInspector;
- (void)updateInspectorAndDeleteChannel:(id)arg1;
- (void)updateKeyframeEditor;
- (bool)useAbsolutePoints;
- (bool)useInputPoints;
- (bool)usesRationalTime;
- (bool)wantsHDRColors;

@end
