
@interface _ECSubjectFormatterContext : NSObject {
    NSString * _localizedPrefix;
    bool  _prefixLastStrongDirectionalityIsLeftToRight;
    NSRegularExpression * _regex;
}

@property (nonatomic, readonly, copy) NSString *localizedPrefix;
@property (nonatomic, readonly) bool prefixLastStrongDirectionalityIsLeftToRight;
@property (nonatomic, readonly) NSRegularExpression *regex;

- (void).cxx_destruct;
- (id)initWithRegex:(id)arg1 localizedPrefix:(id)arg2;
- (id)localizedPrefix;
- (bool)prefixLastStrongDirectionalityIsLeftToRight;
- (id)regex;

@end
