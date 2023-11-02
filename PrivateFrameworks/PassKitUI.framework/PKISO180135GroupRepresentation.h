
@interface PKISO180135GroupRepresentation : NSObject {
    NSString * _analyticsTag;
    unsigned long long  _group;
    UIImage * _icon;
    NSString * _localizedTitle;
}

@property (nonatomic, retain) NSString *analyticsTag;
@property (nonatomic) unsigned long long group;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)analyticsTag;
- (unsigned long long)group;
- (id)icon;
- (id)localizedTitle;
- (void)setAnalyticsTag:(id)arg1;
- (void)setGroup:(unsigned long long)arg1;
- (void)setIcon:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end
