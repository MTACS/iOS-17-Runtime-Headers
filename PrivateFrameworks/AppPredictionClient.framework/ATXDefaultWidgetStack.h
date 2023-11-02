
@interface ATXDefaultWidgetStack : NSObject <ATXDefaultHomeScreenItem, NSCopying, NSSecureCoding> {
    NSArray * _extraLargeDefaultStack;
    NSArray * _largeDefaultStack;
    NSArray * _mediumDefaultStack;
    NSArray * _smallDefaultStack;
    unsigned long long  _suggestedSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *extraLargeDefaultStack;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *largeDefaultStack;
@property (nonatomic, copy) NSArray *mediumDefaultStack;
@property (nonatomic, copy) NSArray *smallDefaultStack;
@property (nonatomic) unsigned long long suggestedSize;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_JSONCompatible:(id)arg1;
- (id)_JSONCompatible:(id)arg1 compact:(bool)arg2;
- (id)compactDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)extraLargeDefaultStack;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)largeDefaultStack;
- (id)mediumDefaultStack;
- (void)setExtraLargeDefaultStack:(id)arg1;
- (void)setLargeDefaultStack:(id)arg1;
- (void)setMediumDefaultStack:(id)arg1;
- (void)setSmallDefaultStack:(id)arg1;
- (void)setSuggestedSize:(unsigned long long)arg1;
- (id)smallDefaultStack;
- (unsigned long long)suggestedSize;

@end
