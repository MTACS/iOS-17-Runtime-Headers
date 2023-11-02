
@interface _ATXCachedClipboardContents : NSObject {
    NSString * _content;
    NSDate * _creationDate;
    NSString * _originatorBundleId;
}

@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSString *originatorBundleId;

- (void).cxx_destruct;
- (id)content;
- (id)creationDate;
- (id)initWithContent:(id)arg1 creationDate:(id)arg2 originatorBundleId:(id)arg3;
- (id)originatorBundleId;

@end
