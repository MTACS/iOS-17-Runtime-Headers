
@interface _MKUserLocationViewImageProvider : NSObject {
    CNContactStore * _contactStore;
    CNMonogrammer * _monogrammer;
    NSObject<OS_dispatch_queue> * _queue;
    _MKUserLocationView * _view;
}

- (void).cxx_destruct;
- (void)_contactsChanged:(id)arg1;
- (id)_monogrammer;
- (void)_updateContactImage;
- (void)_updateDefaultImage;
- (void)_updateImage;
- (id)init;
- (id)initWithUserLocationView:(id)arg1;

@end
