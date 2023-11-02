
@interface SHMediaLibraryItemMetadata : NSObject <NSCopying> {
    NSData * _encodedSystemData;
}

@property (nonatomic, readonly) NSData *encodedSystemData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodedSystemData;
- (id)initWithEncodedSystemData:(id)arg1;
- (bool)validEncodedSystemData:(id)arg1;

@end
