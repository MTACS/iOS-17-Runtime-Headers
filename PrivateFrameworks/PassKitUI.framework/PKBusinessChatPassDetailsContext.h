
@interface PKBusinessChatPassDetailsContext : NSObject <PKBusinessChatContext> {
    PKPass * _pass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)businessIdentifier;
- (id)groupParameters;
- (id)initWithPass:(id)arg1;
- (id)intentParameters;
- (bool)requiresAuthorization;

@end
