
@interface PlistReader : NSObject {
    NSDictionary * _plist;
}

@property (nonatomic, readonly) NSDictionary *plist;

+ (id)plistReaderWithResourcePath:(id)arg1;

- (void).cxx_destruct;
- (id)initWithPlist:(id)arg1;
- (id)plist;

@end
