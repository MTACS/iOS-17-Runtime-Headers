
@interface PKStationPreview : NSObject {
    NSString * _title;
    NSString * _uuid;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 uuid:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)title;
- (id)uuid;

@end
