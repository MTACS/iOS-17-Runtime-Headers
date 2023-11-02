
@interface SKDiskImageInfoParams : NSObject {
    bool  _extraInfo;
    NSDictionary * _imageInfo;
    bool  _stdinPassPhrase;
}

@property (nonatomic) bool extraInfo;
@property (nonatomic, copy) NSDictionary *imageInfo;
@property (nonatomic) bool stdinPassPhrase;

+ (id)asif_info_key;
+ (id)checksum_info_key;
+ (id)compression_info_key;
+ (id)encryption_info_key;
+ (id)format_desc_info_key;
+ (id)format_info_key;
+ (id)getDictDescriptionWithDisk:(id)arg1;
+ (id)identity_info_key;
+ (id)partitions_info_key;
+ (id)runs_info_key;
+ (id)size_info_key;

- (void).cxx_destruct;
- (bool)extraInfo;
- (id)getInfoDictWithDisk:(id)arg1;
- (id)imageInfo;
- (void)setExtraInfo:(bool)arg1;
- (void)setImageInfo:(id)arg1;
- (void)setStdinPassPhrase:(bool)arg1;
- (bool)stdinPassPhrase;

@end
