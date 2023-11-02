
@interface PBFontEntity : NSObject {
    int  mCharSet;
    NSString * mFaceName;
    int  mFamily;
    int  mType;
}

- (void).cxx_destruct;
- (int)charSet;
- (id)faceName;
- (int)family;
- (id)initWithName:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;
- (int)type;

@end
