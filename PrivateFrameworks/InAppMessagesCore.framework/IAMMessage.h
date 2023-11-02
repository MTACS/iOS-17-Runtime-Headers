
@interface IAMMessage : NSObject <NSCopying> {
    NSArray * _contentPages;
    NSString * _identifier;
    NSString * _messageGroupIdentifier;
    bool  _requiresCloseButton;
}

@property (nonatomic, readonly) NSArray *contentPages;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *messageGroupIdentifier;
@property (nonatomic, readonly) bool requiresCloseButton;

- (void).cxx_destruct;
- (id)contentPages;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)initWithICInAppMessageEntry:(id)arg1;
- (id)initWithIdentifier:(id)arg1 messageGroupIdentifier:(id)arg2 contentPages:(id)arg3 requiresCloseButton:(bool)arg4;
- (id)messageGroupIdentifier;
- (bool)requiresCloseButton;

@end
