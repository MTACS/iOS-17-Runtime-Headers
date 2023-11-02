
@interface HKDisplayTypeSummaryAttribution : NSObject <NSCopying> {
    NSAttributedString * _attribution;
    bool  _hasLink;
    bool  _primaryProfileOnly;
}

@property (nonatomic, readonly, copy) NSAttributedString *attribution;
@property (nonatomic, readonly) bool hasLink;
@property (nonatomic, readonly) bool primaryProfileOnly;

- (void).cxx_destruct;
- (id)attribution;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasLink;
- (unsigned long long)hash;
- (id)initWithAttribution:(id)arg1 hasLink:(bool)arg2 primaryProfileOnly:(bool)arg3;
- (id)initWithAttribution:(id)arg1 urlAttribute:(id)arg2 iPadUrlAttribute:(id)arg3 primaryProfileOnly:(bool)arg4;
- (id)initWithAttribution:(id)arg1 urlAttribute:(id)arg2 primaryProfileOnly:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)primaryProfileOnly;

@end
