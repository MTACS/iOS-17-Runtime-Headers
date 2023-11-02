
@interface PKThresholdTopUpActionItem : NSObject <PKIdentifiable> {
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;

@end
