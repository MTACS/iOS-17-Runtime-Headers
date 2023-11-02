
@interface NSMetadataItem : NSObject {
    id  _item;
    void * _reserved;
}

@property (readonly, copy) NSArray *attributes;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (id)_init:(id)arg1;
- (id)_item;
- (void)_setQuery:(id)arg1;
- (id)attributes;
- (void)dealloc;
- (id)valueForAttribute:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valuesForAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

- (id)_cnui_valueForAttribute:(id)arg1;

@end
