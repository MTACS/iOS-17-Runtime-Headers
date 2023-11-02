
@interface WBDocument : NSObject

+ (id)readFrom:(id)arg1;
+ (void)readNoteSeparatorFrom:(id)arg1 type:(int)arg2 separator:(id)arg3;
+ (void)readProperties:(id)arg1 document:(id)arg2;
+ (void)readSectionsFrom:(id)arg1 document:(id)arg2;
+ (void)readTextBoxesFrom:(id)arg1;
+ (void)setTimeStamp:(struct WrdDocumentProperties { int (**x1)(); unsigned short x2; struct WrdDOPTypography {} *x3; struct WrdDrawingObjectGrid {} *x4; struct WrdAutoSummaryInfo {} *x5; struct WrdDateTime {} *x6; struct WrdDateTime {} *x7; struct WrdDateTime {} *x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; short x25; short x26; short x27; unsigned short x28; unsigned short x29; unsigned short x30; unsigned short x31; unsigned short x32; unsigned short x33; unsigned short x34; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; unsigned int x40 : 1; unsigned int x41 : 1; unsigned int x42 : 1; unsigned int x43 : 1; unsigned int x44 : 1; unsigned int x45 : 1; unsigned int x46 : 1; unsigned int x47 : 1; unsigned int x48 : 1; unsigned int x49 : 1; unsigned int x50 : 1; unsigned int x51 : 1; unsigned int x52 : 1; unsigned int x53 : 1; unsigned int x54 : 1; unsigned int x55 : 1; unsigned int x56 : 1; unsigned int x57 : 1; }*)arg1;
+ (void)setupZIndices:(id)arg1 document:(id)arg2 escherType:(int)arg3;

- (id)applicationName;
- (id)init;

@end
