
@interface CUIKOccurrencesCollection : NSObject <NSCopying> {
    NSArray * _allDayOccurrences;
    int  _generation;
    NSArray * _occurrences;
    NSArray * _timedOccurrences;
}

@property (nonatomic, readonly) NSArray *allDayOccurrences;
@property (nonatomic) int generation;
@property (nonatomic, readonly) NSArray *occurrences;
@property (nonatomic, readonly) NSArray *timedOccurrences;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (void).cxx_destruct;
- (id)allDayOccurrences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)generation;
- (id)initWithOccurrences:(id)arg1 timedOccurrences:(id)arg2 allDayOccurrences:(id)arg3;
- (id)initWithOccurrences:(id)arg1 timedOccurrences:(id)arg2 allDayOccurrences:(id)arg3 generation:(int)arg4;
- (id)occurrences;
- (void)setGeneration:(int)arg1;
- (id)timedOccurrences;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (id)asCalendarOccurrencesCollection;

@end
