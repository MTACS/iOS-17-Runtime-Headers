
@protocol MapsSuggestionsTimer <MapsSuggestionsTrigger>

@required

- (id)initWithName:(void *)arg1 queue:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 7: NSString *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)scheduleWithInterval:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg1 leeway:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg2;
- (void)scheduleWithInterval:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg1 repeatAfter:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg2 leeway:(struct Duration { struct duration<long long, std::ratio<1, 1000000000>> { long long x_1_1_1; } x1; })arg3;
- (void)scheduleWithTimeInterval:(double)arg1 leeway:(double)arg2;
- (void)scheduleWithTimeInterval:(double)arg1 repeatAfter:(double)arg2 leeway:(double)arg3;
- (void)unschedule;

@end
