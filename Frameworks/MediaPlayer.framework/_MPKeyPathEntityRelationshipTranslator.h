
@interface _MPKeyPathEntityRelationshipTranslator : NSObject <MPEntityRelationshipTranslator> {
    Class  _relatedMPModelClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class relatedMPModelClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithRelatedMPModelClass:(Class)arg1;
- (Class)relatedMPModelClass;

@end
