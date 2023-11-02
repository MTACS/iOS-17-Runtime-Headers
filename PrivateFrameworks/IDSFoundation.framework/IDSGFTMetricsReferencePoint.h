
@interface IDSGFTMetricsReferencePoint : NSObject {
    IDSGFTMetricsAnonymizer * _anonymizer;
    NSMutableDictionary * _attributes;
    NSString * _fromType;
    id  _fromUniqueID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _template;
    NSMutableDictionary * _times;
}

@property (copy) NSString *fromType;
@property (copy) id fromUniqueID;

- (void).cxx_destruct;
- (id)collectForTimeBase:(double)arg1 anonymize:(bool)arg2;
- (id)description;
- (void)event:(id)arg1;
- (void)event:(id)arg1 time:(double)arg2;
- (void)event:(id)arg1 uniqueID:(id)arg2;
- (void)event:(id)arg1 uniqueID:(id)arg2 reason:(id)arg3;
- (void)event:(id)arg1 uniqueID:(id)arg2 reason:(id)arg3 time:(double)arg4;
- (void)event:(id)arg1 uniqueID:(id)arg2 time:(double)arg3;
- (id)fromType;
- (id)fromUniqueID;
- (id)initWithFromType:(id)arg1 fromUniqueID:(id)arg2 anonymizer:(id)arg3 templateDictionary:(id)arg4;
- (id)instanceForID:(id)arg1;
- (double)referenceTimeForTimeBase:(double)arg1;
- (void)setFromType:(id)arg1;
- (void)setFromUniqueID:(id)arg1;

@end
