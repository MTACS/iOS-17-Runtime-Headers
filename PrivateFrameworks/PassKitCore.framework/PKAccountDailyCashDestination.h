
@interface PKAccountDailyCashDestination : NSObject <NSSecureCoding> {
    bool  _current;
    unsigned long long  _destination;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
}

@property (getter=isCurrent, nonatomic, readonly) bool current;
@property (nonatomic, readonly) unsigned long long destination;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(unsigned long long)arg1 isCurrent:(bool)arg2 localizedTitle:(id)arg3 localizedSubtitle:(id)arg4;
- (bool)isCurrent;
- (id)localizedSubtitle;
- (id)localizedTitle;

@end
