
@interface WFWorkflowCreationOptions : NSObject {
    NSString * _collectionIdentifier;
    bool  _deleted;
    NSString * _identifier;
    unsigned long long  _location;
    WFWorkflowRecord * _record;
}

@property (nonatomic, copy) NSString *collectionIdentifier;
@property (nonatomic) bool deleted;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long location;
@property (nonatomic, readonly) WFWorkflowRecord *record;

- (void).cxx_destruct;
- (id)collectionIdentifier;
- (bool)deleted;
- (id)identifier;
- (id)init;
- (id)initWithRecord:(id)arg1;
- (unsigned long long)location;
- (id)record;
- (void)setCollectionIdentifier:(id)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocation:(unsigned long long)arg1;

@end
