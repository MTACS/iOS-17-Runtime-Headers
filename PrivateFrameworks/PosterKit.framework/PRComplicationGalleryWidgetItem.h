
@interface PRComplicationGalleryWidgetItem : NSObject {
    PRComplicationDescriptor * _descriptor;
    NSString * _displayName;
    bool  _iconImageHidden;
    long long  _kind;
    bool  _selected;
    NSString * _text;
}

@property (nonatomic, readonly) PRComplicationDescriptor *descriptor;
@property (nonatomic, readonly) NSString *displayName;
@property (getter=isIconImageHidden, nonatomic, readonly) bool iconImageHidden;
@property (nonatomic, readonly) long long kind;
@property (getter=isSelected, nonatomic, readonly) bool selected;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (id)descriptor;
- (id)displayName;
- (unsigned long long)hash;
- (id)initWithDisplayName:(id)arg1 selected:(bool)arg2 iconImageHidden:(bool)arg3 descriptor:(id)arg4;
- (id)initWithDisplayName:(id)arg1 selected:(bool)arg2 iconImageHidden:(bool)arg3 text:(id)arg4 kind:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isIconImageHidden;
- (bool)isSelected;
- (long long)kind;
- (id)text;

@end
