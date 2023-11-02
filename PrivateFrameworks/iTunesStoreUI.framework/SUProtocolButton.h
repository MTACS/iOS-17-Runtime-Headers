
@interface SUProtocolButton : NSObject <NSCopying> {
    NSDictionary * _buttonDictionary;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSDictionary *buttonDictionary;
@property (nonatomic, readonly) NSString *buttonLocation;
@property (nonatomic, readonly) NSString *buttonTarget;
@property (nonatomic, readonly) NSString *buttonTitle;

- (id)URL;
- (id)buttonDictionary;
- (id)buttonLocation;
- (id)buttonTarget;
- (id)buttonTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithButtonDictionary:(id)arg1;

@end
