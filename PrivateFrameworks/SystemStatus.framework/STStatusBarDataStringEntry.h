
@interface STStatusBarDataStringEntry : STStatusBarDataEntry {
    NSString * _stringValue;
}

@property (nonatomic, readonly, copy) NSString *stringValue;

// Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus

+ (id)entryWithStringValue:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_equalsBuilderWithObject:(id)arg1;
- (id)_hashBuilder;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)stringValue;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/SystemStatusUI.framework/SystemStatusUI

- (id)initFromData:(const struct { bool x1[46]; BOOL x2[64]; BOOL x3[64]; BOOL x4[256]; int x5; int x6; int x7; int x8; BOOL x9[100]; BOOL x10[100]; BOOL x11[100]; BOOL x12[100]; BOOL x13[2][100]; BOOL x14[1024]; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; int x19; int x20; unsigned int x21 : 1; unsigned int x22; unsigned int x23; int x24; unsigned int x25; BOOL x26[150]; int x27; int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 2; unsigned int x37 : 2; unsigned int x38 : 1; unsigned int x39; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; BOOL x43[256]; BOOL x44[256]; BOOL x45[100]; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; double x51; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; BOOL x55[100]; BOOL x56[100]; BOOL x57[256]; BOOL x58[256]; }*)arg1 type:(int)arg2 string:(const char *)arg3 maxLength:(int)arg4;

@end
