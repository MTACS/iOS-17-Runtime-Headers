
@interface AVParameterEvent : AVMusicEvent {
    struct ParameterEvent { 
        unsigned int parameterID; 
        unsigned int scope; 
        unsigned int element; 
        float value; 
    }  _event;
}

@property unsigned int element;
@property (readonly) struct ParameterEvent { unsigned int x1; unsigned int x2; unsigned int x3; float x4; }*event;
@property unsigned int parameterID;
@property unsigned int scope;
@property float value;

- (unsigned int)element;
- (struct ParameterEvent { unsigned int x1; unsigned int x2; unsigned int x3; float x4; }*)event;
- (id)initWithParameterEvent:(struct ParameterEvent { unsigned int x1; unsigned int x2; unsigned int x3; float x4; }*)arg1;
- (id)initWithParameterID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3 value:(float)arg4;
- (unsigned int)parameterID;
- (unsigned int)scope;
- (void)setElement:(unsigned int)arg1;
- (void)setParameterID:(unsigned int)arg1;
- (void)setScope:(unsigned int)arg1;
- (void)setValue:(float)arg1;
- (float)value;

@end
