
@interface CTMessagePart : NSObject {
    NSString * _contentId;
    NSString * _contentLocation;
    NSString * _contentType;
    NSMutableDictionary * _contentTypeParams;
    NSData * _data;
}

@property (nonatomic, copy) NSString *contentId;
@property (nonatomic, copy) NSString *contentLocation;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, copy) NSData *data;

- (void).cxx_destruct;
- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;
- (id)allContentTypeParameterNames;
- (id)contentId;
- (id)contentLocation;
- (id)contentType;
- (id)contentTypeParameterWithName:(id)arg1;
- (id)data;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (void)setContentId:(id)arg1;
- (void)setContentLocation:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setData:(id)arg1;

@end
