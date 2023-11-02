
@interface TCOfficeFontInfo : NSObject {
    NSString * _fullName;
    bool  _isBold;
    bool  _isItalic;
}

@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) bool isBold;
@property (nonatomic, readonly) bool isItalic;

+ (id)officeFontInfoWithFullName:(id)arg1 isBold:(bool)arg2 isItalic:(bool)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)fullName;
- (id)initWithFullName:(id)arg1 isBold:(bool)arg2 isItalic:(bool)arg3;
- (bool)isBold;
- (bool)isItalic;
- (id)officeName;

@end
