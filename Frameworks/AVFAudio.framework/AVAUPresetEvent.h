
@interface AVAUPresetEvent : AVMusicEvent {
    struct AUPresetEvent { 
        unsigned int scope; 
        unsigned int element; 
        void *preset; 
    }  _event;
}

@property unsigned int element;
@property (readonly) struct AUPresetEvent { unsigned int x1; unsigned int x2; void *x3; }*event;
@property (readonly, copy) NSDictionary *presetDictionary;
@property unsigned int scope;

- (void)dealloc;
- (unsigned int)element;
- (struct AUPresetEvent { unsigned int x1; unsigned int x2; void *x3; }*)event;
- (id)initWithAUPresetEvent:(struct AUPresetEvent { unsigned int x1; unsigned int x2; void *x3; }*)arg1;
- (id)initWithScope:(unsigned int)arg1 element:(unsigned int)arg2 dictionary:(id)arg3;
- (id)presetDictionary;
- (unsigned int)scope;
- (void)setElement:(unsigned int)arg1;
- (void)setScope:(unsigned int)arg1;

@end
