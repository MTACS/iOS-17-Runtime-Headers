
@interface WeatherMaps.InteractiveRefreshTimer : _TtCs12_SwiftObject {
    void block;
    void didExperienceSignificantTimeChangeWhilePaused;
    void interval;
    void isPaused;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  pausedTimerNextFireDate;
    void timer;
}

- (void)notifiedSignificantTimeChange:(id)arg1;

@end
