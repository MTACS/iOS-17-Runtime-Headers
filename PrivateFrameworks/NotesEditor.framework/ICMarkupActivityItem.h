
@interface ICMarkupActivityItem : NSObject {
    ICAttachment * _attachment;
}

@property (nonatomic, retain) ICAttachment *attachment;

- (void).cxx_destruct;
- (id)attachment;
- (id)initWithAttachment:(id)arg1;
- (void)setAttachment:(id)arg1;

@end
