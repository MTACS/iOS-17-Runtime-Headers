
@interface ICLiveLinkQueueEventContentPlayedNow : NSObject {
    NSString * _containerIdentifier;
    long long  _containerKind;
    NSString * _containerMediaIdentifier;
    NSArray * _itemIdentifiers;
    NSString * _startItemIdentifier;
}

@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) long long containerKind;
@property (nonatomic, readonly, copy) NSString *containerMediaIdentifier;
@property (nonatomic, readonly, copy) NSArray *itemIdentifiers;
@property (nonatomic, readonly, copy) NSString *startItemIdentifier;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (long long)containerKind;
- (id)containerMediaIdentifier;
- (id)description;
- (id)initWithItemIdentifiers:(id)arg1 containerKind:(long long)arg2 containerIdentifier:(id)arg3 containerMediaIdentifier:(id)arg4 startItemIdentifier:(id)arg5;
- (id)itemIdentifiers;
- (id)startItemIdentifier;

@end
