
@interface AAUIAwardsDataProvider : NSObject {
    void achievementsPerSection;
    void achievementsPerWorkoutIdentifier;
    void awardQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  calendar;
    void clientAchievementsPerSection;
    void clientAchievementsPerWorkoutIdentifier;
    void clientMostRecentlyEarnedAchievementsPerSection;
    void clientOrderedSections;
    void clientTopAchievements;
    void healthStore;
    void isActivated;
    void isFitnessPlusSubscriber;
    void layoutMode;
    void mostRecentlyEarnedAchievementsPerSection;
    void notifyQueue;
    void orderedSections;
    void overrideDisplayState;
    void propertyQueue;
    void protectedObservers;
    void query;
    void topAchievements;
    void visibilityEvaluator;
}

- (void).cxx_destruct;
- (id)init;

@end
