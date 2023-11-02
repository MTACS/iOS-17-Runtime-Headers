
@interface MSServiceUpdatedHandler : NSObject {
    <MediaServiceUpdatedClientDelegate> * _delegate;
}

@property (nonatomic) <MediaServiceUpdatedClientDelegate> *delegate;

+ (id)shared;

- (void).cxx_destruct;
- (void)defaultMediaServiceUpdated:(id)arg1 homeUserID:(id)arg2;
- (id)delegate;
- (void)mediaServiceChanged:(id)arg1 homeUserID:(id)arg2;
- (void)mediaServiceRemoved:(id)arg1 homeUserID:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
