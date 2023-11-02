
@interface CMIInferenceNetworkIOPortEspressoV1 : NSObject <CMIInferenceNetworkIOPort> {
    unsigned long long  _depth;
    unsigned long long  _height;
    bool  _isInput;
    NSString * _name;
    unsigned long long  _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long depth;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long height;
@property (nonatomic) bool isInput;
@property (nonatomic, retain) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long width;

- (void).cxx_destruct;
- (int)_getInfoFromNetwork:(struct { void *x1; int x2; })arg1 portName:(id)arg2 isInput:(bool)arg3;
- (unsigned long long)depth;
- (unsigned long long)height;
- (bool)isInput;
- (id)name;
- (void)setDepth:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setIsInput:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)width;

@end
