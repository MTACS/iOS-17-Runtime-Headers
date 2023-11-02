
@interface CBAODFlipBookEntryWrapper : NSObject {
    NSData * _entryData;
}

@property (nonatomic, readonly) struct { unsigned int x1; bool x2; float x3; bool x4; float x5[3][3]; bool x6; float x7; bool x8; float x9; bool x10; float x11; float x12; bool x13; float x14; float x15; unsigned char x16[5]; }*entry;
@property (nonatomic, readonly) NSData *entryData;

- (void)dealloc;
- (id)description;
- (struct { unsigned int x1; bool x2; float x3; bool x4; float x5[3][3]; bool x6; float x7; bool x8; float x9; bool x10; float x11; float x12; bool x13; float x14; float x15; unsigned char x16[5]; }*)entry;
- (id)entryData;
- (id)initWithFlipBookEntry:(struct { unsigned int x1; bool x2; float x3; bool x4; float x5[3][3]; bool x6; float x7; bool x8; float x9; bool x10; float x11; float x12; bool x13; float x14; float x15; unsigned char x16[5]; })arg1;

@end
