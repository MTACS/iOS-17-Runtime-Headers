
@interface SiriLongPressButtonConfiguration : NSObject <NSCopying> {
    long long  _buttonIdentifer;
    long long  _longPressBehavior;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) long long buttonIdentifer;
@property (nonatomic) long long longPressBehavior;
@property (nonatomic, readonly) double longPressInterval;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (long long)buttonIdentifer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithButtonIdentifier:(long long)arg1;
- (long long)longPressBehavior;
- (double)longPressInterval;
- (void)setLongPressBehavior:(long long)arg1;
- (id)uniqueIdentifier;

@end
