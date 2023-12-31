
@interface MKPlaceInfoRow : NSObject {
    bool  _enable;
    MKPlaceSectionRowView * _rowView;
    bool  _showIcon;
    unsigned long long  _type;
}

@property (nonatomic) bool enable;
@property (nonatomic, readonly) MKPlaceSectionRowView *rowView;
@property (nonatomic) bool showIcon;
@property (nonatomic, readonly) unsigned long long type;

+ (id)infoRow:(id)arg1 ofType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)enable;
- (id)rowView;
- (void)setEnable:(bool)arg1;
- (void)setShowIcon:(bool)arg1;
- (bool)showIcon;
- (unsigned long long)type;

@end
