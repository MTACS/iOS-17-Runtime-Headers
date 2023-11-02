
@interface CIMetalWrapper : CIFilter {
    NSMutableDictionary * _dict;
    NSString * inputFilterName;
}

@property (retain) NSMutableDictionary *_dict;
@property (copy) NSString *inputFilterName;

- (id)_dict;
- (id)attributes;
- (void)dealloc;
- (id)dummyImagesForImages:(id)arg1;
- (id)init;
- (id)inputFilterName;
- (id)inputKeys;
- (id)outputImage;
- (void)setInputFilterName:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)set_dict:(id)arg1;

@end
