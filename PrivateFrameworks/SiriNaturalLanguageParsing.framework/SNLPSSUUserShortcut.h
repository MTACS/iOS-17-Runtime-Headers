
@interface SNLPSSUUserShortcut : NSObject {
    NSString * _identifier;
    NSString * _phrase;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *phrase;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 phrase:(id)arg2;
- (id)phrase;

@end
