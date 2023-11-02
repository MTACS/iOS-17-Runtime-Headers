
@interface CRSysConfig : NSObject {
    bool  _isADDASysCfgAccessType;
    unsigned int  _syscfgAccess;
}

@property (nonatomic) bool isADDASysCfgAccessType;
@property (nonatomic) unsigned int syscfgAccess;

+ (id)sharedAccess;

- (id)createStringForKey:(unsigned int)arg1;
- (bool)dataIsValid:(struct _syscfgEntry { unsigned int x1; union { unsigned char x_2_1_1[16]; struct _syscfgJumboData { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_2_1_2; } x2; }*)arg1 length:(unsigned int)arg2;
- (struct _syscfgEntry { unsigned int x1; union { unsigned char x_2_1_1[16]; struct _syscfgJumboData { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_2_1_2; } x2; }*)findEntry:(char *)arg1 key:(unsigned int)arg2;
- (bool)findSyscfgAccess;
- (id)init;
- (bool)isADDASysCfgAccessType;
- (id)readSystemConfigAll;
- (id)readSystemConfigArea;
- (void)setIsADDASysCfgAccessType:(bool)arg1;
- (void)setSyscfgAccess:(unsigned int)arg1;
- (unsigned int)syscfgAccess;
- (bool)syscfgUpdate:(char *)arg1 key:(unsigned int)arg2 buffer:(const char *)arg3 length:(unsigned int)arg4;
- (bool)writeSystemConfig:(unsigned int)arg1 inBuffer:(id)arg2;

@end
