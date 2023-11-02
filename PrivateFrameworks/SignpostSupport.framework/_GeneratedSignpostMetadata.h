
@interface _GeneratedSignpostMetadata : NSObject {
    NSNumber * _baseMct;
    NSNumber * _beginMct;
    NSNumber * _emitMct;
    NSNumber * _endMct;
    NSString * _name;
    NSNumber * _signpostId;
}

@property (nonatomic, retain) NSNumber *baseMct;
@property (nonatomic, retain) NSNumber *beginMct;
@property (nonatomic, retain) NSNumber *emitMct;
@property (nonatomic, retain) NSNumber *endMct;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSNumber *signpostId;

- (void).cxx_destruct;
- (id)baseMct;
- (id)beginMct;
- (id)emitMct;
- (id)endMct;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setBaseMct:(id)arg1;
- (void)setBeginMct:(id)arg1;
- (void)setEmitMct:(id)arg1;
- (void)setEndMct:(id)arg1;
- (void)setSignpostId:(id)arg1;
- (id)signpostId;

@end
