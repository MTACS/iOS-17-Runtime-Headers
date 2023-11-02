
@interface MCDrawInput : MCKeyboardInput {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentLayoutCharacterKeysFrame;
    int  _drawHand;
    struct RefPtr<TI::Favonius::KeyboardLayout> { 
        struct KeyboardLayout {} *m_ptr; 
    }  _keyboardLayout;
    struct PathResampler { 
        struct PathResamplerParams { 
            double segment_length; 
            int inflection_point_detection_mode; 
            int inflection_point_type; 
            bool should_downsample; 
            double minimum_pause_length; 
            bool should_flush_on_pause; 
        } m_params; 
        struct Path { 
            struct vector<TI::CP::PathSample, std::allocator<TI::CP::PathSample>> { 
                struct PathSample {} *__begin_; 
                struct PathSample {} *__end_; 
                struct __compressed_pair<TI::CP::PathSample *, std::allocator<TI::CP::PathSample>> { 
                    struct PathSample {} *__value_; 
                } __end_cap_; 
            } m_samples; 
            struct vector<unsigned int, std::allocator<unsigned int>> { 
                unsigned int *__begin_; 
                unsigned int *__end_; 
                struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
                    unsigned int *__value_; 
                } __end_cap_; 
            } m_inflection_points; 
        } m_resampled_path; 
        struct Path { 
            struct vector<TI::CP::PathSample, std::allocator<TI::CP::PathSample>> { 
                struct PathSample {} *__begin_; 
                struct PathSample {} *__end_; 
                struct __compressed_pair<TI::CP::PathSample *, std::allocator<TI::CP::PathSample>> { 
                    struct PathSample {} *__value_; 
                } __end_cap_; 
            } m_samples; 
            struct vector<unsigned int, std::allocator<unsigned int>> { 
                unsigned int *__begin_; 
                unsigned int *__end_; 
                struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
                    unsigned int *__value_; 
                } __end_cap_; 
            } m_inflection_points; 
        } m_raw_path; 
        bool m_is_final; 
        unsigned int m_processed_sample_count; 
        unsigned int m_retroactively_processed_sample_count; 
    }  _resampler;
    bool  _shouldResample;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentLayoutCharacterKeysFrame;
@property (nonatomic) int drawHand;
@property (nonatomic, readonly) bool isComplete;
@property (nonatomic, readonly) bool isCompleting;
@property (nonatomic, readonly) bool isDrawing;
@property (nonatomic, readonly) struct RefPtr<TI::Favonius::KeyboardLayout> { struct KeyboardLayout {} *x1; } keyboardLayout;
@property (nonatomic, readonly) void*resampler;
@property (nonatomic, readonly) bool shouldResample;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendWithPoint:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 force:(double)arg3 radius:(double)arg4 touchStage:(int)arg5;
- (bool)_canCompose;
- (id)_createDrawableTouchInputWithPoint:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 force:(double)arg3 radius:(double)arg4 touchStage:(int)arg5 previousTouchInput:(id)arg6 isInflectionPoint:(bool)arg7;
- (void)_updateSampledInputs;
- (void)_updateSampledInputsWithResampler:(const void*)arg1 permanentlyFinalized:(bool)arg2;
- (bool)canComposeNew:(id)arg1;
- (void)composeNew:(id)arg1;
- (void)composeWith:(id)arg1;
- (struct Vector<WTF::RefPtr<TI::Favonius::LayoutKey>, 0UL> { unsigned long long x1; struct VectorBuffer<WTF::RefPtr<TI::Favonius::LayoutKey>, 0UL> { void *x_2_1_1; unsigned long long x_2_1_2; } x2; })copyLayoutKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentLayoutCharacterKeysFrame;
- (int)drawHand;
- (id)init;
- (id)initWithKeyboardLayout:(const void*)arg1;
- (id)initWithKeyboardLayout:(const void*)arg1 currentLayoutCharacterKeysFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithKeyboardLayout:(const void*)arg1 currentLayoutCharacterKeysFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 shouldResample:(bool)arg3;
- (bool)isComplete;
- (bool)isCompleting;
- (bool)isDrawing;
- (struct RefPtr<TI::Favonius::KeyboardLayout> { struct KeyboardLayout {} *x1; })keyboardLayout;
- (void*)resampler;
- (void)setDrawHand:(int)arg1;
- (id)shortDescriptionWithLeadingString:(id)arg1;
- (bool)shouldResample;

@end
