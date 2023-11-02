
@interface SLODLDInputContext : NSObject {
    NSNumber * _inputAnchor;
    NSNumber * _inputOrigin;
    NSString * _inputUtt;
    NSData * _prevEmb;
    NSArray * _prevTokens;
}

@property (nonatomic, readonly) NSNumber *inputAnchor;
@property (nonatomic, readonly) NSNumber *inputOrigin;
@property (nonatomic, readonly) NSString *inputUtt;
@property (nonatomic, readonly) NSData *prevEmb;
@property (nonatomic, readonly) NSArray *prevTokens;

- (void).cxx_destruct;
- (id)description;
- (id)initWithInputOrigin:(id)arg1 inputAnchor:(id)arg2 prevTokens:(id)arg3 prevEmb:(id)arg4;
- (id)inputAnchor;
- (id)inputOrigin;
- (id)inputUtt;
- (id)prevEmb;
- (id)prevTokens;
- (void)updateWithInputUtt:(id)arg1;

@end
