
@interface PRComplicationGalleryItem : NSObject {
    SBHApplicationWidgetCollection * _applicationWidgetCollection;
    PRComplicationGalleryWidgetItem * _widgetItem;
}

@property (nonatomic, readonly) SBHApplicationWidgetCollection *applicationWidgetCollection;
@property (nonatomic, readonly) PRComplicationGalleryWidgetItem *widgetItem;

- (void).cxx_destruct;
- (id)applicationWidgetCollection;
- (id)description;
- (unsigned long long)hash;
- (id)initWithApplicationWidgetCollection:(id)arg1;
- (id)initWithWidgetItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)widgetItem;

@end
