
@interface ASRelationshipBeganPlaceholder : NSObject {
    NSSet * _blocksWaitingOnSuccess;
    id  _token;
}

@property (nonatomic, readonly) NSSet *blocksWaitingOnSuccess;
@property (nonatomic, readonly) id token;

- (void).cxx_destruct;
- (id)blocksWaitingOnSuccess;
- (id)initWithToken:(id)arg1;
- (void)registerBlockWaitingOnSuccess:(id /* block */)arg1;
- (id)token;

@end
