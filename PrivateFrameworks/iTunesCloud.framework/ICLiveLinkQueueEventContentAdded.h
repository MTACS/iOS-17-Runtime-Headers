
@interface ICLiveLinkQueueEventContentAdded : NSObject {
    NSString * _containerIdentifier;
    long long  _containerKind;
    NSString * _containerMediaIdentifier;
    NSArray * _itemIdentifiers;
}

@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) long long containerKind;
@property (nonatomic, readonly, copy) NSString *containerMediaIdentifier;
@property (nonatomic, readonly, copy) NSArray *itemIdentifiers;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (long long)containerKind;
- (id)containerMediaIdentifier;
- (id)description;
- (id)initWithItemIdentifiers:(id)arg1 containerKind:(long long)arg2 containerIdentifier:(id)arg3 containerMediaIdentifier:(id)arg4;
- (id)itemIdentifiers;

@end
