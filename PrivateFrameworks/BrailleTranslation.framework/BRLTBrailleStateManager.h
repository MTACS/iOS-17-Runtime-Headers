
@interface BRLTBrailleStateManager : NSObject <NSCopying> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _activeBrailleEditingRegion;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _activeScriptEditingRegion;
    NSRecursiveLock * _apiLock;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _brailleBackwardEditingRegion;
    BRLTBrailleBuffer * _brailleBuffer;
    bool  _brailleDirty;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _brailleFocus;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _brailleForwardEditingRegion;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _brailleMergeEditingRegion;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _brailleSelection;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _brailleSuggestion;
    <BRLTBrailleStateManagerDelegate> * _delegate;
    bool  _editable;
    unsigned long long  _inputTranslationMode;
    bool  _isTerminalOutput;
    double  _lastScriptStringOutputTime;
    unsigned long long  _outputTranslationMode;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _pendingScriptSelection;
    NSMutableArray * _runningScriptStringHistory;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _scriptBackwardEditingRegion;
    bool  _scriptDirty;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _scriptForwardEditingRegion;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _scriptMergeEditingRegion;
    BRLTScriptString * _scriptString;
    BRLTBrailleString * _staticBrailleString;
    <BRLTBrailleTranslationDelegateProtocol> * _translationDelegate;
}

@property (nonatomic, readonly) BRLTBrailleBuffer *brailleBuffer;
@property (nonatomic) bool editable;
@property (nonatomic) unsigned long long inputTranslationMode;
@property (nonatomic) bool isTerminalOutput;
@property (nonatomic) unsigned long long outputTranslationMode;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_brailleRangeForTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textPositions:(id)arg2 brailleLength:(unsigned long long)arg3;
- (bool)_deleteBrailleCharSilently:(bool)arg1;
- (bool)_forwardDeleteBrailleCharSilently:(bool)arg1;
- (bool)_generateBrailleBuffer:(bool)arg1;
- (bool)_generateBrailleBufferForDelete;
- (void)_generateBrailleBufferForInsert;
- (bool)_selectionIsValidForDelete;
- (bool)_selectionIsValidForInsert;
- (bool)_setBrailleSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 newScriptLocation:(out unsigned long long*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_textRangeForBrailleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textPositions:(id)arg2 scriptLength:(long long)arg3;
- (void)_translate:(bool)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })backwardEditingAtomForScriptString:(id)arg1;
- (id)brailleBuffer;
- (id)brailleDisplayString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })brailleFocus;
- (unsigned long long)brailleLocationForScriptLocation:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })brailleRangeForScriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })brailleSelection;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })brailleSuggestion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleteBrailleChar;
- (bool)deleteBrailleCharSilently;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })deleteMergeAtomForScriptString:(id)arg1;
- (bool)editable;
- (bool)forwardDeleteBrailleChar;
- (bool)forwardDeleteBrailleCharSilently;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })forwardEditingAtomForScriptString:(id)arg1;
- (id)initWithDelegate:(id)arg1 translationDelegate:(id)arg2;
- (unsigned long long)inputTranslationMode;
- (void)insertBrailleChar:(id)arg1;
- (void)insertBrailleChar:(id)arg1 modifiers:(id)arg2;
- (void)insertBrailleChar:(id)arg1 modifiers:(id)arg2 silently:(bool)arg3;
- (void)insertBrailleChar:(id)arg1 silently:(bool)arg2;
- (bool)isTerminalOutput;
- (id)outputScriptString;
- (unsigned long long)outputTranslationMode;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })scriptEditingRange;
- (unsigned long long)scriptLocationForBrailleLocation:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })scriptRangeForBrailleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })scriptRangeOfBrailleCellRepresentingCharacterAtScriptIndex:(unsigned long long)arg1;
- (void)setBrailleSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setBrailleSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 needsForwardToScreenReader:(out bool*)arg2 newScriptLocation:(out unsigned long long*)arg3;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setInputTranslationMode:(unsigned long long)arg1;
- (void)setIsTerminalOutput:(bool)arg1;
- (void)setOutputTranslationMode:(unsigned long long)arg1;
- (void)setScriptString:(id)arg1;
- (void)setTranslationDelegate:(id)arg1;
- (void)translate;
- (void)translateForced:(bool)arg1;
- (id)translationDelegate;

@end
