
@interface PXWidgetTimeline : NSObject

+ (bool)requestForYouWidgetTimelineReloadWithError:(id*)arg1;
+ (id)timelineFromLibrary:(id)arg1 albumIdentifier:(id)arg2 widgetIdentifier:(id)arg3 widgetSize:(struct CGSize { double x1; double x2; })arg4;
+ (id)timelineFromLibrary:(id)arg1 forWidgetSize:(struct CGSize { double x1; double x2; })arg2 timelineSize:(unsigned long long)arg3;

@end
