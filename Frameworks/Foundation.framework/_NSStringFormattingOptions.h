
@interface _NSStringFormattingOptions : NSObject <NSCopying> {
    NSNumber * _pluralizationNumber;
}

@property (retain) NSNumber *pluralizationNumber;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)pluralizationNumber;
- (void)setPluralizationNumber:(id)arg1;

@end
