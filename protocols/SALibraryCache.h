
@protocol SALibraryCache <NSObject>

@required

- (NSArray *)binaryLoadInfos;
- (unsigned long long)endAddress;
- (unsigned long long)startAddress;
- (unsigned long long)textSegmentsEndAddress;
- (unsigned long long)textSegmentsStartAddress;
- (NSUUID *)uuid;

@end
