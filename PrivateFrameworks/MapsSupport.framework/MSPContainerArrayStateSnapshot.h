
@interface MSPContainerArrayStateSnapshot : NSObject <MSPContainerStateSnapshot> {
    NSUUID * _clientIdentifier;
    NSArray * _contents;
}

@property (nonatomic, retain) NSUUID *clientIdentifier;
@property (nonatomic, readonly, copy) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)contents;
- (id)description;
- (id)init;
- (id)initWithContents:(id)arg1;
- (id)initWithContents:(id)arg1 clientIdentifier:(id)arg2;
- (void)setClientIdentifier:(id)arg1;

@end
