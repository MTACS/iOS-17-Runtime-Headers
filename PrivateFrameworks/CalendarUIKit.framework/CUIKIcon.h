
@interface CUIKIcon : ISIcon {
    NSCalendar * _calendar;
    NSDateComponents * _dateComponents;
    long long  _format;
    <CUIKIconGenerator> * _iconGenerator;
    ISIcon * _internalIcon;
}

@property (nonatomic, readonly, copy) NSCalendar *calendar;
@property (nonatomic, readonly, copy) NSDateComponents *dateComponents;
@property (nonatomic, readonly) long long format;
@property (nonatomic, readonly) <CUIKIconGenerator> *iconGenerator;
@property (nonatomic, retain) ISIcon *internalIcon;

- (void).cxx_destruct;
- (id)calendar;
- (id)dateComponents;
- (long long)format;
- (void)getImageForImageDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (id)iconGenerator;
- (id)imageForDescriptor:(id)arg1;
- (id)initWithDate:(id)arg1 calendar:(id)arg2 format:(long long)arg3;
- (id)initWithDateComponents:(id)arg1 calendar:(id)arg2 format:(long long)arg3 forceNoTextEffects:(bool)arg4;
- (id)internalIcon;
- (id)prepareImageForDescriptor:(id)arg1;
- (void)prepareImagesForImageDescriptors:(id)arg1;
- (void)setInternalIcon:(id)arg1;

@end
