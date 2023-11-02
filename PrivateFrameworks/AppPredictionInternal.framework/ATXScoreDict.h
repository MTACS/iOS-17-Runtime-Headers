
@interface ATXScoreDict : NSObject <ATXScoreLogSerializable> {
    NSSet * _defaultKeys;
    struct __CFDictionary { } * _dict;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)scoreDictFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)atx_writeToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (void)getKeys:(id*)arg1 count:(unsigned long long)arg2;
- (id)init;
- (id)initWithDefaultValueForKeys:(id)arg1;
- (id)initWithDefaultValueForScoreTypeKeys;
- (double)scoreForKey:(id)arg1 found:(bool*)arg2;
- (void)setScore:(double)arg1 forKey:(id)arg2;
- (id)toDictionary;

@end