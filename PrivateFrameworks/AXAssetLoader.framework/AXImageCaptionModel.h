
@interface AXImageCaptionModel : NSObject {
    NSDictionary * _modelProperties;
}

@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *stage;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (id)description;
- (id)initWithModelProperties:(id)arg1;
- (id)language;
- (id)stage;
- (id)version;

@end
