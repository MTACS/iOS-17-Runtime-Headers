
@interface MPCSharedListeningQueueEventContentUpdatedMessage : NSObject {
    NSString * _localizedMessage;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly, copy) NSString *localizedMessage;
@property (nonatomic, readonly, copy) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2;
- (id)localizedMessage;
- (id)localizedTitle;

@end
