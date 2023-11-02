
@interface CNUIBackgroundColors : NSObject {
    NSArray * _contactImage;
    NSArray * _contactPoster;
}

@property (nonatomic, retain) NSArray *contactImage;
@property (nonatomic, retain) NSArray *contactPoster;
@property (nonatomic, readonly) NSData *data;

- (void).cxx_destruct;
- (id)contactImage;
- (id)contactPoster;
- (id)data;
- (id)init;
- (id)initWithData:(id)arg1;
- (void)setContactImage:(id)arg1;
- (void)setContactPoster:(id)arg1;

@end
