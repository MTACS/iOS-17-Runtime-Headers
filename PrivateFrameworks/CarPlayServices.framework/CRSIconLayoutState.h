
@interface CRSIconLayoutState : NSObject <NSSecureCoding> {
    unsigned long long  _columns;
    bool  _displaysOEMIcon;
    NSArray * _hiddenIcons;
    NSString * _oemIconLabel;
    NSArray * _pages;
    unsigned long long  _rows;
}

@property (nonatomic) unsigned long long columns;
@property (nonatomic) bool displaysOEMIcon;
@property (nonatomic, readonly) NSArray *hiddenIcons;
@property (nonatomic, retain) NSString *oemIconLabel;
@property (nonatomic, readonly) NSArray *pages;
@property (nonatomic) unsigned long long rows;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)columns;
- (id)description;
- (bool)displaysOEMIcon;
- (void)encodeWithCoder:(id)arg1;
- (id)hiddenIcons;
- (id)iconOrder;
- (id)initWithCoder:(id)arg1;
- (id)initWithPages:(id)arg1 hiddenIcons:(id)arg2;
- (id)oemIconLabel;
- (id)pages;
- (unsigned long long)rows;
- (void)setColumns:(unsigned long long)arg1;
- (void)setDisplaysOEMIcon:(bool)arg1;
- (void)setOemIconLabel:(id)arg1;
- (void)setRows:(unsigned long long)arg1;

@end
