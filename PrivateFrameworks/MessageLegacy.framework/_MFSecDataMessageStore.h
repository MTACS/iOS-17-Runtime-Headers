
@interface _MFSecDataMessageStore : MFDataMessageStore

@property (nonatomic, copy) NSString *storagePath;

+ (Class)classForMimePart;

@end
