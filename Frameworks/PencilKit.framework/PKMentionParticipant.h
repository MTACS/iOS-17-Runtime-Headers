
@interface PKMentionParticipant : NSObject {
    UIColor * _color;
    NSString * _displayName;
    NSString * _identifier;
}

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *identifier;

+ (id)mentionWithDisplayName:(id)arg1 identifier:(id)arg2 color:(id)arg3;

- (void).cxx_destruct;
- (id)color;
- (id)description;
- (id)displayName;
- (id)identifier;
- (id)initWithDisplayName:(id)arg1 identifier:(id)arg2 color:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
