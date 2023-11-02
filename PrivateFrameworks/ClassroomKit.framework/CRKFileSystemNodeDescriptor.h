
@interface CRKFileSystemNodeDescriptor : NSObject {
    NSData * _content;
    NSString * _fileName;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSData *content;
@property (nonatomic, readonly, copy) NSString *fileName;
@property (nonatomic, readonly) long long type;

+ (id)dataDescriptorWithFileName:(id)arg1 content:(id)arg2;
+ (id)directoryDescriptorWithFileName:(id)arg1;

- (void).cxx_destruct;
- (id)content;
- (id)fileName;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 fileName:(id)arg2 content:(id)arg3;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
